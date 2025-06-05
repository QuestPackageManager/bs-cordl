#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/MacOsNetworkInterfaceAPI.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__MacOsNetworkInterfaceAPI_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::*)()>(
    &::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x43ed8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::*)(int32_t)>(
    &::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x43ebc94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI.GetAllNetworkInterfaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*> (::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::*)()>(
    &::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::GetAllNetworkInterfaces)> {
  constexpr static std::size_t size = 0x9b4;
  constexpr static std::size_t addrs = 0x43ed8f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>::get(), 4));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::__cordl_internal_get_AF_INET6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AF_INET6;
}
constexpr int32_t const& System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::__cordl_internal_get_AF_INET6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AF_INET6;
}
constexpr void System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::__cordl_internal_set_AF_INET6(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AF_INET6 = value;
}
inline void System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::_ctor(int32_t AF_INET6) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, AF_INET6);
}
inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*>
System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::GetAllNetworkInterfaces() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*>, false>(this,
                                                                                                                                                                                    ___internal_method);
}
inline ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI* System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>());
}
inline ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI* System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::New_ctor(int32_t AF_INET6) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>(AF_INET6));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::MacOsNetworkInterfaceAPI() {}
