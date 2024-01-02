#pragma once
#include "System/Net/NetworkInformation/zzzz__CommonUnixIPGlobalProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixIPGlobalProperties_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixIPGlobalProperties._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::UnixIPGlobalProperties::*)()>(
    &::System::Net::NetworkInformation::UnixIPGlobalProperties::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29f05f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixIPGlobalProperties*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Net::NetworkInformation::UnixIPGlobalProperties* System::Net::NetworkInformation::UnixIPGlobalProperties::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::NetworkInformation::UnixIPGlobalProperties*>());
}
inline void System::Net::NetworkInformation::UnixIPGlobalProperties::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixIPGlobalProperties*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::UnixIPGlobalProperties::UnixIPGlobalProperties() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
