#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixStructs/ifreq_mtu.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_mtu_def.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_mtu_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer::ifreq_mtu__ifr_name_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer::ifreq_mtu__ifr_name_e__FixedBuffer() {}
constexpr ::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer& System::Net::NetworkInformation::AixStructs::ifreq_mtu::__cordl_internal_get_ifr_name() {
  return this->___ifr_name;
}
constexpr ::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer const& System::Net::NetworkInformation::AixStructs::ifreq_mtu::__cordl_internal_get_ifr_name() const {
  return this->___ifr_name;
}
constexpr void System::Net::NetworkInformation::AixStructs::ifreq_mtu::__cordl_internal_set_ifr_name(::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer value) {
  this->___ifr_name = value;
}
constexpr int32_t& System::Net::NetworkInformation::AixStructs::ifreq_mtu::__cordl_internal_get_ifru_mtu() {
  return this->___ifru_mtu;
}
constexpr int32_t const& System::Net::NetworkInformation::AixStructs::ifreq_mtu::__cordl_internal_get_ifru_mtu() const {
  return this->___ifru_mtu;
}
constexpr void System::Net::NetworkInformation::AixStructs::ifreq_mtu::__cordl_internal_set_ifru_mtu(int32_t value) {
  this->___ifru_mtu = value;
}
// Ctor Parameters [CppParam { name: "ifr_name", ty: "::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "ifru_mtu", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixStructs::ifreq_mtu::ifreq_mtu(::System::Net::NetworkInformation::AixStructs::ifreq_mtu__ifr_name_e__FixedBuffer ifr_name, int32_t ifru_mtu) noexcept {
  this->ifr_name = ifr_name;
  this->ifru_mtu = ifru_mtu;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixStructs::ifreq_mtu::ifreq_mtu() {}
