#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/SystemNetworkInterface.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__SystemNetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceFactory_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::SystemNetworkInterface.GetNetworkInterfaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*> (*)()>(
        &::System::Net::NetworkInformation::SystemNetworkInterface::GetNetworkInterfaces)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x43e81d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::SystemNetworkInterface*>::get(), "GetNetworkInterfaces",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Net::NetworkInformation::SystemNetworkInterface::setStaticF_nif(::System::Net::NetworkInformation::NetworkInterfaceFactory* value) {
  ::cordl_internals::setStaticField<::System::Net::NetworkInformation::NetworkInterfaceFactory*, "nif",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::SystemNetworkInterface*>::get>(
      std::forward<::System::Net::NetworkInformation::NetworkInterfaceFactory*>(value));
}
inline ::System::Net::NetworkInformation::NetworkInterfaceFactory* System::Net::NetworkInformation::SystemNetworkInterface::getStaticF_nif() {
  return ::cordl_internals::getStaticField<::System::Net::NetworkInformation::NetworkInterfaceFactory*, "nif",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::SystemNetworkInterface*>::get>();
}
inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*>
System::Net::NetworkInformation::SystemNetworkInterface::GetNetworkInterfaces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::SystemNetworkInterface*>::get(),
                                                                             "GetNetworkInterfaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*>, false>(nullptr,
                                                                                                                                                                                    ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::SystemNetworkInterface::SystemNetworkInterface() {}
