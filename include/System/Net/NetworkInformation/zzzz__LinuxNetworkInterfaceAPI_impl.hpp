#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__LinuxNetworkInterfaceAPI_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI.FreeInterfaceAddresses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::FreeInterfaceAddresses)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29edfb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>::get(), "FreeInterfaceAddresses",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI.GetInterfaceAddresses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<void*>)>(&::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::GetInterfaceAddresses)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29ee034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>::get(), "GetInterfaceAddresses",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI.GetAllNetworkInterfaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*> (::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::*)()>(
    &::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::GetAllNetworkInterfaces)> {
  constexpr static std::size_t size = 0xaf4;
  constexpr static std::size_t addrs = 0x29ee0b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::*)()>(
    &::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29eec80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::FreeInterfaceAddresses(void* ifap) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>::get(), "FreeInterfaceAddresses",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ifap);
}
inline int32_t System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::GetInterfaceAddresses(ByRef<void*> ifap) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>::get(), "GetInterfaceAddresses",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ifap);
}
inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*>
System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::GetAllNetworkInterfaces() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*>, false>(this,
                                                                                                                                                                                    ___internal_method);
}
inline ::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI* System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>());
}
inline void System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::LinuxNetworkInterfaceAPI() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
