#pragma once
// IWYU pragma private; include "IgnoranceCore/IgnoranceClientStats.hpp"
#include "IgnoranceCore/zzzz__IgnoranceClientStats_def.hpp"
// Ctor Parameters [CppParam { name: "RTT", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BytesReceived", ty: "uint64_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "BytesSent", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PacketsReceived", ty: "uint64_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "PacketsSent", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PacketsLost", ty: "uint64_t",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::IgnoranceCore::IgnoranceClientStats::IgnoranceClientStats(uint32_t RTT, uint64_t BytesReceived, uint64_t BytesSent, uint64_t PacketsReceived, uint64_t PacketsSent,
                                                                      uint64_t PacketsLost) noexcept {
  this->RTT = RTT;
  this->BytesReceived = BytesReceived;
  this->BytesSent = BytesSent;
  this->PacketsReceived = PacketsReceived;
  this->PacketsSent = PacketsSent;
  this->PacketsLost = PacketsLost;
}
// Ctor Parameters []
constexpr ::IgnoranceCore::IgnoranceClientStats::IgnoranceClientStats() {}
