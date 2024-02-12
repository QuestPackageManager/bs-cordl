#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceFactoryPal_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceFactory_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterfaceFactoryPal.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::NetworkInterfaceFactory* (*)()>(
    &::System::Net::NetworkInformation::NetworkInterfaceFactoryPal::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x29f4d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::NetworkInterfaceFactoryPal*>::get(), "Create",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Net::NetworkInformation::NetworkInterfaceFactory* System::Net::NetworkInformation::NetworkInterfaceFactoryPal::Create() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::NetworkInterfaceFactoryPal*>::get(), "Create",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::NetworkInterfaceFactory*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::NetworkInterfaceFactoryPal::NetworkInterfaceFactoryPal() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
