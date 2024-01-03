#pragma once
#include "System/Net/NetworkInformation/zzzz__MacOsNetworkInterfaceAPI_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__FreeBSDNetworkInterfaceAPI_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::*)()>(
    &::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29ed98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI* System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI*>());
}
inline void System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::FreeBSDNetworkInterfaceAPI() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
