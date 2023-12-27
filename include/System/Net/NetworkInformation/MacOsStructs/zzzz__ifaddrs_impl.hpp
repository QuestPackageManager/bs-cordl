#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Net/NetworkInformation/MacOsStructs/zzzz__ifaddrs_def.hpp"
// Ctor Parameters [CppParam { name: "ifa_next", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifa_name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "ifa_flags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifa_addr", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "ifa_netmask", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifa_dstaddr", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifa_data", ty: "void*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::MacOsStructs::ifaddrs::ifaddrs(void* ifa_next, ::StringW ifa_name, uint32_t ifa_flags, void* ifa_addr, void* ifa_netmask, void* ifa_dstaddr,
                                                                            void* ifa_data) noexcept {
  this->ifa_next = ifa_next;
  this->ifa_name = ifa_name;
  this->ifa_flags = ifa_flags;
  this->ifa_addr = ifa_addr;
  this->ifa_netmask = ifa_netmask;
  this->ifa_dstaddr = ifa_dstaddr;
  this->ifa_data = ifa_data;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::MacOsStructs::ifaddrs::ifaddrs() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
