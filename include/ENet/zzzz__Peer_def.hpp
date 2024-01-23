#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Forward declare root types
namespace ENet {
struct Peer;
}
// Write type traits
MARK_VAL_T(::ENet::Peer);
// Type: ENet::Peer
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ENet {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15234))
// CS Name: ::ENet::Peer
struct CORDL_TYPE Peer {
public:
  // Declarations
  __declspec(property(get = get_NativeData, put = set_NativeData)) void* NativeData;

  __declspec(property(get = get_IsSet)) bool IsSet;

  __declspec(property(get = get_ID)) uint32_t _cordl_ID;

  __declspec(property(get = get_IP))::StringW IP;

  __declspec(property(get = get_Port)) uint16_t Port;

  __declspec(property(get = get_MTU)) uint32_t MTU;

  __declspec(property(get = get_State))::ENet::PeerState State;

  __declspec(property(get = get_RoundTripTime)) uint32_t RoundTripTime;

  __declspec(property(get = get_LastRoundTripTime)) uint32_t LastRoundTripTime;

  __declspec(property(get = get_LastSendTime)) uint32_t LastSendTime;

  __declspec(property(get = get_LastReceiveTime)) uint32_t LastReceiveTime;

  __declspec(property(get = get_PacketsSent)) uint64_t PacketsSent;

  __declspec(property(get = get_PacketsLost)) uint64_t PacketsLost;

  __declspec(property(get = get_PacketsThrottle)) float_t PacketsThrottle;

  __declspec(property(get = get_BytesSent)) uint64_t BytesSent;

  __declspec(property(get = get_BytesReceived)) uint64_t BytesReceived;

  __declspec(property(get = get_Data, put = set_Data)) void* Data;

  /// @brief Method get_NativeData, addr 0x21f27c0, size 0x8, virtual false, abstract: false, final false
  inline void* get_NativeData();

  /// @brief Method set_NativeData, addr 0x21f27c8, size 0x8, virtual false, abstract: false, final false
  inline void set_NativeData(void* value);

  /// @brief Method .ctor, addr 0x21efdb4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(void* peer);

  /// @brief Method get_IsSet, addr 0x21f284c, size 0x54, virtual false, abstract: false, final false
  inline bool get_IsSet();

  /// @brief Method get_ID, addr 0x21f28a0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_ID();

  /// @brief Method get_IP, addr 0x21f28a8, size 0xc8, virtual false, abstract: false, final false
  inline ::StringW get_IP();

  /// @brief Method get_Port, addr 0x21f2b50, size 0x18, virtual false, abstract: false, final false
  inline uint16_t get_Port();

  /// @brief Method get_MTU, addr 0x21f2be4, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_MTU();

  /// @brief Method get_State, addr 0x21f2c78, size 0x70, virtual false, abstract: false, final false
  inline ::ENet::PeerState get_State();

  /// @brief Method get_RoundTripTime, addr 0x21f2d64, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_RoundTripTime();

  /// @brief Method get_LastRoundTripTime, addr 0x21f2df8, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_LastRoundTripTime();

  /// @brief Method get_LastSendTime, addr 0x21f2e8c, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_LastSendTime();

  /// @brief Method get_LastReceiveTime, addr 0x21f2f20, size 0x18, virtual false, abstract: false, final false
  inline uint32_t get_LastReceiveTime();

  /// @brief Method get_PacketsSent, addr 0x21f2fb4, size 0x18, virtual false, abstract: false, final false
  inline uint64_t get_PacketsSent();

  /// @brief Method get_PacketsLost, addr 0x21f3048, size 0x18, virtual false, abstract: false, final false
  inline uint64_t get_PacketsLost();

  /// @brief Method get_PacketsThrottle, addr 0x21f30dc, size 0x18, virtual false, abstract: false, final false
  inline float_t get_PacketsThrottle();

  /// @brief Method get_BytesSent, addr 0x21f3170, size 0x18, virtual false, abstract: false, final false
  inline uint64_t get_BytesSent();

  /// @brief Method get_BytesReceived, addr 0x21f3204, size 0x18, virtual false, abstract: false, final false
  inline uint64_t get_BytesReceived();

  /// @brief Method get_Data, addr 0x21f3298, size 0x18, virtual false, abstract: false, final false
  inline void* get_Data();

  /// @brief Method set_Data, addr 0x21f332c, size 0x28, virtual false, abstract: false, final false
  inline void set_Data(void* value);

  /// @brief Method ThrowIfNotCreated, addr 0x21f2970, size 0xa8, virtual false, abstract: false, final false
  inline void ThrowIfNotCreated();

  /// @brief Method ConfigureThrottle, addr 0x21f33d8, size 0x48, virtual false, abstract: false, final false
  inline void ConfigureThrottle(uint32_t interval, uint32_t acceleration, uint32_t deceleration, uint32_t threshold);

  /// @brief Method Send, addr 0x21f34cc, size 0x38, virtual false, abstract: false, final false
  inline int32_t Send(uint8_t channelID, ByRef<::ENet::Packet> packet);

  /// @brief Method Receive, addr 0x21f3598, size 0x94, virtual false, abstract: false, final false
  inline bool Receive(ByRef<uint8_t> channelID, ByRef<::ENet::Packet> packet);

  /// @brief Method Ping, addr 0x21f36b0, size 0x18, virtual false, abstract: false, final false
  inline void Ping();

  /// @brief Method PingInterval, addr 0x21f3744, size 0x28, virtual false, abstract: false, final false
  inline void PingInterval(uint32_t interval);

  /// @brief Method Timeout, addr 0x21f37f0, size 0x40, virtual false, abstract: false, final false
  inline void Timeout(uint32_t timeoutLimit, uint32_t timeoutMinimum, uint32_t timeoutMaximum);

  /// @brief Method Disconnect, addr 0x21f38cc, size 0x28, virtual false, abstract: false, final false
  inline void Disconnect(uint32_t data);

  /// @brief Method DisconnectNow, addr 0x21f3978, size 0x28, virtual false, abstract: false, final false
  inline void DisconnectNow(uint32_t data);

  /// @brief Method DisconnectLater, addr 0x21f3a24, size 0x28, virtual false, abstract: false, final false
  inline void DisconnectLater(uint32_t data);

  /// @brief Method Reset, addr 0x21f3ad0, size 0x18, virtual false, abstract: false, final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "nativePeer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "nativeID", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr Peer(void* nativePeer, uint32_t nativeID) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Peer();

  /// @brief Field nativePeer, offset: 0x0, size: 0x8, def value: None
  void* nativePeer;

  /// @brief Field nativeID, offset: 0x8, size: 0x4, def value: None
  uint32_t nativeID;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::Peer, 0x10>, "Size mismatch!");

static_assert(offsetof(::ENet::Peer, nativePeer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::ENet::Peer, nativeID) == 0x8, "Offset mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::Peer, "ENet", "Peer");
