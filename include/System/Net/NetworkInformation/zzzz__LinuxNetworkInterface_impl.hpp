#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__LinuxNetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
#include "System/Net/NetworkInformation/zzzz__OperationalStatus_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterface.get_IfacePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::NetworkInformation::LinuxNetworkInterface::*)()>(
    &::System::Net::NetworkInformation::LinuxNetworkInterface::get_IfacePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29eec88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface*>::get(),
                                                                               "get_IfacePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterface._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::NetworkInformation::LinuxNetworkInterface::*)(::StringW)>(
    &::System::Net::NetworkInformation::LinuxNetworkInterface::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x29eeba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterface.GetIPProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::IPInterfaceProperties* (
    ::System::Net::NetworkInformation::LinuxNetworkInterface::*)()>(&::System::Net::NetworkInformation::LinuxNetworkInterface::GetIPProperties)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x29eec90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterface.get_OperationalStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::OperationalStatus (::System::Net::NetworkInformation::LinuxNetworkInterface::*)()>(
    &::System::Net::NetworkInformation::LinuxNetworkInterface::get_OperationalStatus)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x29eed04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterface.ReadLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Net::NetworkInformation::LinuxNetworkInterface::ReadLine)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x29eefc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface*>::get(), "ReadLine",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_get_iface_path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iface_path;
}
constexpr ::StringW const& System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_get_iface_path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iface_path;
}
constexpr void System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_set_iface_path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___iface_path)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_get_iface_operstate_path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iface_operstate_path;
}
constexpr ::StringW const& System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_get_iface_operstate_path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iface_operstate_path;
}
constexpr void System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_set_iface_operstate_path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___iface_operstate_path)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_get_iface_flags_path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iface_flags_path;
}
constexpr ::StringW const& System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_get_iface_flags_path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iface_flags_path;
}
constexpr void System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_set_iface_flags_path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___iface_flags_path)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW System::Net::NetworkInformation::LinuxNetworkInterface::get_IfacePath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface*>::get(),
                                                                             "get_IfacePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::LinuxNetworkInterface* System::Net::NetworkInformation::LinuxNetworkInterface::New_ctor(::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::NetworkInformation::LinuxNetworkInterface*>(name));
}
inline void System::Net::NetworkInformation::LinuxNetworkInterface::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::System::Net::NetworkInformation::IPInterfaceProperties* System::Net::NetworkInformation::LinuxNetworkInterface::GetIPProperties() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::IPInterfaceProperties*, false>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::OperationalStatus System::Net::NetworkInformation::LinuxNetworkInterface::get_OperationalStatus() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::OperationalStatus, false>(this, ___internal_method);
}
inline ::StringW System::Net::NetworkInformation::LinuxNetworkInterface::ReadLine(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::LinuxNetworkInterface*>::get(), "ReadLine",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::LinuxNetworkInterface::LinuxNetworkInterface() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
