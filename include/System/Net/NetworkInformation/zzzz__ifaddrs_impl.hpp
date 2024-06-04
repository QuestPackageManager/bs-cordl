#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/ifaddrs.hpp"
#include "System/Net/NetworkInformation/zzzz__ifa_ifu_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__ifaddrs_def.hpp"
#include "System/Net/NetworkInformation/zzzz__ifa_ifu_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
// Ctor Parameters [CppParam { name: "ifa_next", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifa_name", ty: "::StringW", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "ifa_flags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifa_addr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "ifa_netmask", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifa_ifu", ty: "::System::Net::NetworkInformation::ifa_ifu", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "ifa_data", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::ifaddrs::ifaddrs(::System::IntPtr ifa_next, ::StringW ifa_name, uint32_t ifa_flags, ::System::IntPtr ifa_addr, ::System::IntPtr ifa_netmask,
                                                              ::System::Net::NetworkInformation::ifa_ifu ifa_ifu, ::System::IntPtr ifa_data) noexcept {
  this->ifa_next = ifa_next;
  this->ifa_name = ifa_name;
  this->ifa_flags = ifa_flags;
  this->ifa_addr = ifa_addr;
  this->ifa_netmask = ifa_netmask;
  this->ifa_ifu = ifa_ifu;
  this->ifa_data = ifa_data;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::ifaddrs::ifaddrs() {}
