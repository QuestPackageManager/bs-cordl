#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/ifa_ifu.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__ifa_ifu_def.hpp"
constexpr void*& System::Net::NetworkInformation::ifa_ifu::__cordl_internal_get_ifu_broadaddr() {
  return this->___ifu_broadaddr;
}
constexpr void* const& System::Net::NetworkInformation::ifa_ifu::__cordl_internal_get_ifu_broadaddr() const {
  return this->___ifu_broadaddr;
}
constexpr void System::Net::NetworkInformation::ifa_ifu::__cordl_internal_set_ifu_broadaddr(void* value) {
  this->___ifu_broadaddr = value;
}
constexpr void*& System::Net::NetworkInformation::ifa_ifu::__cordl_internal_get_ifu_dstaddr() {
  return this->___ifu_dstaddr;
}
constexpr void* const& System::Net::NetworkInformation::ifa_ifu::__cordl_internal_get_ifu_dstaddr() const {
  return this->___ifu_dstaddr;
}
constexpr void System::Net::NetworkInformation::ifa_ifu::__cordl_internal_set_ifu_dstaddr(void* value) {
  this->___ifu_dstaddr = value;
}
// Ctor Parameters [CppParam { name: "ifu_broadaddr", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifu_dstaddr", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::ifa_ifu::ifa_ifu(void* ifu_broadaddr, void* ifu_dstaddr) noexcept {
  this->ifu_broadaddr = ifu_broadaddr;
  this->ifu_dstaddr = ifu_dstaddr;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::ifa_ifu::ifa_ifu() {}
