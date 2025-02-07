#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/LinuxUnicastIPAddressInformation.hpp"
#include "System/Net/NetworkInformation/zzzz__UnicastIPAddressInformation_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__LinuxUnicastIPAddressInformation_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::*)(::System::Net::IPAddress*)>(
    &::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x43f1b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation.get_Address
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPAddress* (::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::*)()>(
    &::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::get_Address)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43f1b38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::System::Net::IPAddress*& System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::__cordl_internal_get_address() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___address;
}
constexpr ::System::Net::IPAddress* const& System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::__cordl_internal_get_address() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___address;
}
constexpr void System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::__cordl_internal_set_address(::System::Net::IPAddress* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___address)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::_ctor(::System::Net::IPAddress* address) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, address);
}
inline ::System::Net::IPAddress* System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::get_Address() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*, false>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation* System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::New_ctor(::System::Net::IPAddress* address) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>(address));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::LinuxUnicastIPAddressInformation() {}
