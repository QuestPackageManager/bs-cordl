#pragma once
// IWYU pragma private; include "ENet/Peer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Peer)
namespace ENet {
struct Packet;
}
namespace ENet {
struct PeerState;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace ENet {
struct Peer;
}
// Write type traits
MARK_VAL_T(::ENet::Peer);
DEFINE_IL2CPP_CLASS(::ENet::Peer, "ENet", "Peer");
// Dependencies System.IntPtr
namespace ENet {
// Is value type: true
// CS Name: ENet.Peer
struct CORDL_TYPE Peer {
public:
  // Declarations
  __declspec(property(get = get_BytesReceived)) uint64_t BytesReceived;

  __declspec(property(get = get_BytesSent)) uint64_t BytesSent;

  __declspec(property(get = get_Data, put = set_Data)) ::System::IntPtr Data;

  __declspec(property(get = get_IP)) ::StringW IP;

  __declspec(property(get = get_IsSet)) bool IsSet;

  __declspec(property(get = get_LastReceiveTime)) uint32_t LastReceiveTime;

  __declspec(property(get = get_LastRoundTripTime)) uint32_t LastRoundTripTime;

  __declspec(property(get = get_LastSendTime)) uint32_t LastSendTime;

  __declspec(property(get = get_MTU)) uint32_t MTU;

  __declspec(property(get = get_NativeData, put = set_NativeData)) ::System::IntPtr NativeData;

  __declspec(property(get = get_PacketsLost)) uint64_t PacketsLost;

  __declspec(property(get = get_PacketsSent)) uint64_t PacketsSent;

  __declspec(property(get = get_PacketsThrottle)) float_t PacketsThrottle;

  __declspec(property(get = get_Port)) uint16_t Port;

  __declspec(property(get = get_RoundTripTime)) uint32_t RoundTripTime;

  __declspec(property(get = get_State)) ::ENet::PeerState State;

  __declspec(property(get = get_ID)) uint32_t _cordl_ID;

  /// @brief Method ConfigureThrottle, addr 0x5ce4e64, size 0x48, virtual false, abstract: false, final false
  inline void ConfigureThrottle(uint32_t interval, uint32_t acceleration, uint32_t deceleration, uint32_t threshold);

  /// @brief Method Disconnect, addr 0x5ce530c, size 0x28, virtual false, abstract: false, final false
  inline void Disconnect(uint32_t data);

  /// @brief Method DisconnectLater, addr 0x5ce5464, size 0x28, virtual false, abstract: false, final false
  inline void DisconnectLater(uint32_t data);

  /// @brief Method DisconnectNow, addr 0x5ce53b8, size 0x28, virtual false, abstract: false, final false
  inline void DisconnectNow(uint32_t data);

  /// @brief Method Ping, addr 0x5ce50f0, size 0x18, virtual false, abstract: false, final false
  inline void Ping();

  /// @brief Method PingInterval, addr 0x5ce5184, size 0x28, virtual false, abstract: false, final false
  inline void PingInterval(uint32_t interval);

  /// @brief Method Receive, addr 0x5ce5024, size 0x48, virtual false, abstract: false, final false
  inline bool Receive(::by_ref<uint8_t> channelID, ::by_ref<::ENet::Packet> packet);

  /// @brief Method Reset, addr 0x5ce5510, size 0x18, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Send, addr 0x5ce4f58, size 0x38, virtual false, abstract: false, final false
  inline int32_t Send(uint8_t channelID, ::by_ref<::ENet::Packet> packet);

  /// @brief Method ThrowIfNotCreated, addr 0x5ce44b0, size 0x58, virtual false, abstract: false, final false
  inline void ThrowIfNotCreated();

  /// @brief Method Timeout, addr 0x5ce5230, size 0x40, virtual false, abstract: false, final false
  inline void Timeout(uint32_t timeoutLimit, uint32_t timeoutMinimum, uint32_t timeoutMaximum);

  /// @brief Method .ctor, addr 0x5ce1f38, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr peer);

  /// @brief Method get_BytesReceived, addr 0x5ce4c90, size 0x18, virtual false, abstract: false, final false
  inline uint64_t get_BytesReceived();

  /// @brief Method get_BytesSent, addr 0x5ce4bfc, size 0x18, virtual false, abstract: false, final false
  inline uint64_t get_BytesSent();

  /// @brief Method get_Data, addr 0x5ce4d24, size 0x18, virtual false, abstract: false, final false
  inline ::System::IntPtr get_Data();

  /// @brief Method get_ID, addr 0x5ce43f0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_ID();

  /// @brief Method get_IP, addr 0x5ce43f8, size 0xb8, virtual false, abstract: false, final false
  inline ::StringW get_IP();

  /// @brief Method get_IsSet, addr 0x5ce43e0, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsSet();

  /// @brief Method get_LastReceiveTime, addr 0x5ce49ac, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_LastReceiveTime();

  /// @brief Method get_LastRoundTripTime, addr 0x5ce4884, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_LastRoundTripTime();

  /// @brief Method get_LastSendTime, addr 0x5ce4918, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_LastSendTime();

  /// @brief Method get_MTU, addr 0x5ce46cc, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_MTU();

  /// @brief Method get_NativeData, addr 0x5ce4354, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr get_NativeData();

  /// @brief Method get_PacketsLost, addr 0x5ce4ad4, size 0x18, virtual false, abstract: false, final false
  inline uint64_t get_PacketsLost();

  /// @brief Method get_PacketsSent, addr 0x5ce4a40, size 0x18, virtual false, abstract: false, final false
  inline uint64_t get_PacketsSent();

  /// @brief Method get_PacketsThrottle, addr 0x5ce4b68, size 0x18, virtual false, abstract: false, final false
  inline float_t get_PacketsThrottle();

  /// @brief Method get_Port, addr 0x5ce4638, size 0x18, virtual false, abstract: false, final false
  inline uint16_t get_Port();

  /// @brief Method get_RoundTripTime, addr 0x5ce47f0, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_RoundTripTime();

  /// @brief Method get_State, addr 0x5ce4760, size 0x14, virtual false, abstract: false, final false
  inline ::ENet::PeerState get_State();

  /// @brief Method set_Data, addr 0x5ce4db8, size 0x28, virtual false, abstract: false, final false
  inline void set_Data(::System::IntPtr value);

  /// @brief Method set_NativeData, addr 0x5ce435c, size 0x8, virtual false, abstract: false, final false
  inline void set_NativeData(::System::IntPtr value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Peer();

  // Ctor Parameters [CppParam { name: "nativePeer", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "nativeID", ty: "uint32_t", modifiers: "", def_value:
  // None, comment: None }]
  constexpr Peer(::System::IntPtr nativePeer, uint32_t nativeID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22501 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field nativePeer, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr nativePeer;

  /// @brief Field nativeID, offset: 0x8, size: 0x4, def value: None
  uint32_t nativeID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ENet::Peer, nativePeer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::ENet::Peer, nativeID) == 0x8, "Offset mismatch!");

static_assert(sizeof(::ENet::Peer) == 0x10, "Size mismatch!");

} // namespace ENet
