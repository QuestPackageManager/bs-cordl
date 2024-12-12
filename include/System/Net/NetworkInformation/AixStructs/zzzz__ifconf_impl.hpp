#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixStructs/ifconf.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifconf_def.hpp"
constexpr int32_t& System::Net::NetworkInformation::AixStructs::ifconf::__cordl_internal_get_ifc_len() {
  return this->___ifc_len;
}
constexpr int32_t const& System::Net::NetworkInformation::AixStructs::ifconf::__cordl_internal_get_ifc_len() const {
  return this->___ifc_len;
}
constexpr void System::Net::NetworkInformation::AixStructs::ifconf::__cordl_internal_set_ifc_len(int32_t value) {
  this->___ifc_len = value;
}
constexpr ::System::IntPtr& System::Net::NetworkInformation::AixStructs::ifconf::__cordl_internal_get_ifc_buf() {
  return this->___ifc_buf;
}
constexpr ::System::IntPtr const& System::Net::NetworkInformation::AixStructs::ifconf::__cordl_internal_get_ifc_buf() const {
  return this->___ifc_buf;
}
constexpr void System::Net::NetworkInformation::AixStructs::ifconf::__cordl_internal_set_ifc_buf(::System::IntPtr value) {
  this->___ifc_buf = value;
}
// Ctor Parameters [CppParam { name: "ifc_len", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifc_buf", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixStructs::ifconf::ifconf(int32_t ifc_len, ::System::IntPtr ifc_buf) noexcept {
  this->ifc_len = ifc_len;
  this->ifc_buf = ifc_buf;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixStructs::ifconf::ifconf() {}
