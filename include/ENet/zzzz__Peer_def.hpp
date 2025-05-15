#pragma once
// IWYU pragma private; include "ENet/Peer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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

  /// @brief Method ConfigureThrottle, addr 0x3aa6860, size 0x48, virtual false, abstract: false, final false
  inline void ConfigureThrottle(uint32_t interval, uint32_t acceleration, uint32_t deceleration, uint32_t threshold);

  /// @brief Method Disconnect, addr 0x3aa6d14, size 0x28, virtual false, abstract: false, final false
  inline void Disconnect(uint32_t data);

  /// @brief Method DisconnectLater, addr 0x3aa6e6c, size 0x28, virtual false, abstract: false, final false
  inline void DisconnectLater(uint32_t data);

  /// @brief Method DisconnectNow, addr 0x3aa6dc0, size 0x28, virtual false, abstract: false, final false
  inline void DisconnectNow(uint32_t data);

  /// @brief Method Ping, addr 0x3aa6af8, size 0x18, virtual false, abstract: false, final false
  inline void Ping();

  /// @brief Method PingInterval, addr 0x3aa6b8c, size 0x28, virtual false, abstract: false, final false
  inline void PingInterval(uint32_t interval);

  /// @brief Method Receive, addr 0x3aa6a20, size 0x54, virtual false, abstract: false, final false
  inline bool Receive(::ByRef<uint8_t> channelID, ::ByRef<::ENet::Packet> packet);

  /// @brief Method Reset, addr 0x3aa6f18, size 0x18, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Send, addr 0x3aa6954, size 0x38, virtual false, abstract: false, final false
  inline int32_t Send(uint8_t channelID, ::ByRef<::ENet::Packet> packet);

  /// @brief Method ThrowIfNotCreated, addr 0x3aa5e78, size 0x68, virtual false, abstract: false, final false
  inline void ThrowIfNotCreated();

  /// @brief Method Timeout, addr 0x3aa6c38, size 0x40, virtual false, abstract: false, final false
  inline void Timeout(uint32_t timeoutLimit, uint32_t timeoutMinimum, uint32_t timeoutMaximum);

  /// @brief Method .ctor, addr 0x3aa36cc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr peer);

  /// @brief Method get_BytesReceived, addr 0x3aa668c, size 0x18, virtual false, abstract: false, final false
  inline uint64_t get_BytesReceived();

  /// @brief Method get_BytesSent, addr 0x3aa65f8, size 0x18, virtual false, abstract: false, final false
  inline uint64_t get_BytesSent();

  /// @brief Method get_Data, addr 0x3aa6720, size 0x18, virtual false, abstract: false, final false
  inline ::System::IntPtr get_Data();

  /// @brief Method get_ID, addr 0x3aa5da8, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_ID();

  /// @brief Method get_IP, addr 0x3aa5db0, size 0xc8, virtual false, abstract: false, final false
  inline ::StringW get_IP();

  /// @brief Method get_IsSet, addr 0x3aa5d98, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsSet();

  /// @brief Method get_LastReceiveTime, addr 0x3aa63a8, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_LastReceiveTime();

  /// @brief Method get_LastRoundTripTime, addr 0x3aa6280, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_LastRoundTripTime();

  /// @brief Method get_LastSendTime, addr 0x3aa6314, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_LastSendTime();

  /// @brief Method get_MTU, addr 0x3aa60a8, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_MTU();

  /// @brief Method get_NativeData, addr 0x3aa5d0c, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr get_NativeData();

  /// @brief Method get_PacketsLost, addr 0x3aa64d0, size 0x18, virtual false, abstract: false, final false
  inline uint64_t get_PacketsLost();

  /// @brief Method get_PacketsSent, addr 0x3aa643c, size 0x18, virtual false, abstract: false, final false
  inline uint64_t get_PacketsSent();

  /// @brief Method get_PacketsThrottle, addr 0x3aa6564, size 0x18, virtual false, abstract: false, final false
  inline float_t get_PacketsThrottle();

  /// @brief Method get_Port, addr 0x3aa6014, size 0x18, virtual false, abstract: false, final false
  inline uint16_t get_Port();

  /// @brief Method get_RoundTripTime, addr 0x3aa61ec, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_RoundTripTime();

  /// @brief Method get_State, addr 0x3aa613c, size 0x34, virtual false, abstract: false, final false
  inline ::ENet::PeerState get_State();

  /// @brief Method set_Data, addr 0x3aa67b4, size 0x28, virtual false, abstract: false, final false
  inline void set_Data(::System::IntPtr value);

  /// @brief Method set_NativeData, addr 0x3aa5d14, size 0x8, virtual false, abstract: false, final false
  inline void set_NativeData(::System::IntPtr value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Peer();

  // Ctor Parameters [CppParam { name: "nativePeer", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "nativeID", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr Peer(::System::IntPtr nativePeer, uint32_t nativeID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17758 };

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

static_assert(::cordl_internals::size_check_v<::ENet::Peer, 0x10>, "Size mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::Peer, "ENet", "Peer");
