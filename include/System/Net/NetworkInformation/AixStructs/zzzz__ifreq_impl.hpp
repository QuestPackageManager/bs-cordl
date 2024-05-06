#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixStructs/ifreq.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_impl.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__sockaddr_impl.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_def.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_def.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__sockaddr_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer::__ifreq___ifr_name_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer::__ifreq___ifr_name_e__FixedBuffer() {}
constexpr ::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer& System::Net::NetworkInformation::AixStructs::ifreq::__cordl_internal_get_ifr_name() {
  return this->___ifr_name;
}
constexpr ::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer const& System::Net::NetworkInformation::AixStructs::ifreq::__cordl_internal_get_ifr_name() const {
  return this->___ifr_name;
}
constexpr void System::Net::NetworkInformation::AixStructs::ifreq::__cordl_internal_set_ifr_name(::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer value) {
  this->___ifr_name = value;
}
constexpr ::System::Net::NetworkInformation::AixStructs::sockaddr& System::Net::NetworkInformation::AixStructs::ifreq::__cordl_internal_get_ifru_addr() {
  return this->___ifru_addr;
}
constexpr ::System::Net::NetworkInformation::AixStructs::sockaddr const& System::Net::NetworkInformation::AixStructs::ifreq::__cordl_internal_get_ifru_addr() const {
  return this->___ifru_addr;
}
constexpr void System::Net::NetworkInformation::AixStructs::ifreq::__cordl_internal_set_ifru_addr(::System::Net::NetworkInformation::AixStructs::sockaddr value) {
  this->___ifru_addr = value;
}
// Ctor Parameters [CppParam { name: "ifr_name", ty: "::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "ifru_addr", ty: "::System::Net::NetworkInformation::AixStructs::sockaddr", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixStructs::ifreq::ifreq(::System::Net::NetworkInformation::AixStructs::__ifreq___ifr_name_e__FixedBuffer ifr_name,
                                                                      ::System::Net::NetworkInformation::AixStructs::sockaddr ifru_addr) noexcept {
  this->ifr_name = ifr_name;
  this->ifru_addr = ifru_addr;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixStructs::ifreq::ifreq() {}
