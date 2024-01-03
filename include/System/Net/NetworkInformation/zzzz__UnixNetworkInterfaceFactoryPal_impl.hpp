#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceFactoryPal_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceFactory_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::NetworkInterfaceFactory* (*)()>(
    &::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal::Create)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x29f02ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal*>::get(), "Create",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Net::NetworkInformation::NetworkInterfaceFactory* System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal::Create() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal*>::get(), "Create",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::NetworkInterfaceFactory*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal::UnixNetworkInterfaceFactoryPal() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
