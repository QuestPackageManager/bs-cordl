#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/FreeBSDNetworkInterfaceAPI.hpp"
#include "System/Net/NetworkInformation/zzzz__MacOsNetworkInterfaceAPI_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__FreeBSDNetworkInterfaceAPI_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::*)()>(
    &::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x30411d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI* System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI*>());
}
inline void System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::FreeBSDNetworkInterfaceAPI() {}
