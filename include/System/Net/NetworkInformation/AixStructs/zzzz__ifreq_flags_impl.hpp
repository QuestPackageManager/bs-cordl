#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixStructs/ifreq_flags.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_flags_def.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_flags_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer::ifreq_flags__ifr_name_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer::ifreq_flags__ifr_name_e__FixedBuffer() {}
constexpr ::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer& System::Net::NetworkInformation::AixStructs::ifreq_flags::__cordl_internal_get_ifr_name() {
  return this->___ifr_name;
}
constexpr ::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer const& System::Net::NetworkInformation::AixStructs::ifreq_flags::__cordl_internal_get_ifr_name() const {
  return this->___ifr_name;
}
constexpr void System::Net::NetworkInformation::AixStructs::ifreq_flags::__cordl_internal_set_ifr_name(::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer value) {
  this->___ifr_name = value;
}
constexpr uint32_t& System::Net::NetworkInformation::AixStructs::ifreq_flags::__cordl_internal_get_ifru_flags() {
  return this->___ifru_flags;
}
constexpr uint32_t const& System::Net::NetworkInformation::AixStructs::ifreq_flags::__cordl_internal_get_ifru_flags() const {
  return this->___ifru_flags;
}
constexpr void System::Net::NetworkInformation::AixStructs::ifreq_flags::__cordl_internal_set_ifru_flags(uint32_t value) {
  this->___ifru_flags = value;
}
// Ctor Parameters [CppParam { name: "ifr_name", ty: "::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "ifru_flags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::AixStructs::ifreq_flags::ifreq_flags(::System::Net::NetworkInformation::AixStructs::ifreq_flags__ifr_name_e__FixedBuffer ifr_name,
                                                                                  uint32_t ifru_flags) noexcept {
  this->ifr_name = ifr_name;
  this->ifru_flags = ifru_flags;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixStructs::ifreq_flags::ifreq_flags() {}
