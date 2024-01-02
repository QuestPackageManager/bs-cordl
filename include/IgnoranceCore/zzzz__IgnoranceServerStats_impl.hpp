#pragma once
#include "IgnoranceCore/zzzz__IgnoranceServerStats_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceClientStats_def.hpp"
// Ctor Parameters [CppParam { name: "BytesReceived", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BytesSent", ty: "uint64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "PacketsReceived", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PacketsSent", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "PeersCount", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PeerStats", ty:
// "::System::Collections::Generic::Dictionary_2<int32_t,::IgnoranceCore::IgnoranceClientStats>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::IgnoranceCore::IgnoranceServerStats::IgnoranceServerStats(uint64_t BytesReceived, uint64_t BytesSent, uint64_t PacketsReceived, uint64_t PacketsSent, uint64_t PeersCount,
                                                                      ::System::Collections::Generic::Dictionary_2<int32_t, ::IgnoranceCore::IgnoranceClientStats>* PeerStats) noexcept {
  this->BytesReceived = BytesReceived;
  this->BytesSent = BytesSent;
  this->PacketsReceived = PacketsReceived;
  this->PacketsSent = PacketsSent;
  this->PeersCount = PeersCount;
  this->PeerStats = PeerStats;
}
// Ctor Parameters []
constexpr ::IgnoranceCore::IgnoranceServerStats::IgnoranceServerStats() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
