#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__IPAddressInformation_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::IPAddressInformation.get_Address
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPAddress* (::System::Net::NetworkInformation::IPAddressInformation::*)()>(
    &::System::Net::NetworkInformation::IPAddressInformation::get_Address)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::IPAddressInformation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::IPAddressInformation*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::IPAddressInformation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::IPAddressInformation::*)()>(
    &::System::Net::NetworkInformation::IPAddressInformation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x286ee20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::IPAddressInformation*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Net::IPAddress* System::Net::NetworkInformation::IPAddressInformation::get_Address() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::IPAddressInformation*>::get(),
                                                                             "get_Address", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*, false>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::IPAddressInformation* System::Net::NetworkInformation::IPAddressInformation::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::NetworkInformation::IPAddressInformation*>());
}
inline void System::Net::NetworkInformation::IPAddressInformation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::IPAddressInformation*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::IPAddressInformation::IPAddressInformation() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
